/*******************************************************************************
Lowai Dobie
CSCI-135
Task B 
social4.cpp
adds a new post to the posts array. It performs successfully
if the username is found in the network and the posts array is not full,
in this case the function also should return true. Otherwise, nothing is 
added and the function returns false
Tong Yi
4/27/21
*******************************************************************************/
#include <iostream>

using namespace std;

struct Post {
    string username, message;
};

class Profile { //class setup for Profile
private:
    string username;
    string displayname;

public:
    Profile(string usrn, string dspn) {
        username = usrn;
        displayname = dspn;
    }

    Profile() {
        username = "";          //setting up members 
        displayname = "";       //setting up members 
    }

    string getUsername() {
        return username;
    }

    string getFullName() {
        return displayname + " (@" + username + ")";
    }

    void setDisplayName(string dspn) {
        displayname = dspn;
    }
};

class Network {     //class setup for Network
private:
    static const int MAX_USERS = 20;        //setting up constructors
    static const int MAX_POSTS = 100;       //setting up constructors
    int numUsers = 0;
    Post posts[MAX_POSTS];
    int numPosts = 0;
    Profile profiles[MAX_USERS];
    bool following[MAX_USERS][MAX_USERS];

    int findID(string usrn) {
        for (int i = 0; i < numUsers; i++) {
            if (profiles[i].getUsername() == usrn) {
                return i;
            }
        }

        return -1;
    }

public:
    Network() {
                for (int i=0; i< MAX_USERS; i++) {
                        for (int j=0; j< MAX_USERS; j++) {
                                following[i][j] = false;
                    }
                }
                numPosts = 0;
        }

        bool addUser(string usrn, string dspn) {
            Profile newUser(usrn, dspn);

            if (numUsers < MAX_USERS) {
                profiles[numUsers++] = newUser;
                return true;
            }

            return false;
        }

        bool follow(string usrn1, string usrn2) {
            int usrnID1 = findID(usrn1);
            int usrnID2 = findID(usrn2);

            if (usrnID1 != -1 && usrnID2 != -1) {
                following[usrnID1][usrnID2] = true;
                return true;
            }

            return false;
        }

        void printDot() {
            cout << "digraph {" << "\n";

                for (int i=0; i<numUsers; i++) {
                        cout << " \"@" << profiles[i].getUsername() << "\"\n";
                }

                for (int i=0; i<numUsers; i++) {
                        for (int j=0; j<numUsers; j++) {
                                if(following[i][j]) {
                                    cout << " \"@" << profiles[i].getUsername() << "\" -> \"@"
                                    << profiles[j].getUsername() << "\"\n";
                                }
                        }
                }

                cout << "}" << "\n";
        }

        bool writePost(string usern, string msg) {
                int index = findID(usern);
                if(index == -1 || numPosts == MAX_POSTS) {
                        return false;
                }

                posts[numPosts].username = usern;
                posts[numPosts].message = msg;

                numPosts++;

                return true;
        }

        bool printTimeline(string usern) {

                int userIndex = findID(usern);
                if(userIndex == -1) {
                        return false;
                }

                for(int i=numPosts-1; i>=0; i--) {

                        Post p = posts[i];
                        int writerindex = findID(p.username);

                        if(p.username == usern) {
                                cout << profiles[userIndex].getFullName() << ": " << p.message << endl;
                        } else if(following[userIndex][writerindex]) {
                                cout << profiles[writerindex].getFullName() << ": " << p.message << endl;
                        }

                }

                return true;
        }
};

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    // write some posts
    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}