/*******************************************************************************
Lowai Dobie
CSCI-135
Task C
time.cpp
The function should create 
and return a new moment of time that is min minutes after time0.
Tong Yi
4/12/21
*******************************************************************************/
#include <iostream>
using namespace std;

struct Time {

    int h;

    int m;

};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

struct Movie {

    string title;

    Genre genre;     // only one genre per movie

    int duration;    // in minutes

};

struct TimeSlot {

    Movie movie;     // what movie

    Time startTime; // when it starts

};


int minutesSinceMidnight(Time time){
    int num_of_mins = time.h*60+time.m;
    return num_of_mins;
}

int minutesUntil(Time earlier, Time later){
    int num_of_mins = (later.h-earlier.h) *60 + (later.m - earlier.m);
    return num_of_mins;
}

Time addMinutes(Time time0, int min){
    Time new_time;
    new_time.h= (min+time0.m)/60+ time0.h;
    new_time.m= (min+time0.m)%60;
    return new_time;
}

void printTime(Time time) {

    cout << time.h << ":" << time.m ;

}


void printMovie(Movie mv){

    string g;

    switch (mv.genre) {

        case ACTION   : g = "ACTION"; break;

        case COMEDY   : g = "COMEDY"; break;

        case DRAMA    : g = "DRAMA"; break;

        case ROMANCE : g = "ROMANCE"; break;

        case THRILLER : g = "THRILLER"; break;

    }

    cout << mv.title << " " << g << " (" << mv.duration << " min)";

}
void printTimeSlotfunction( TimeSlot ts){

printMovie( ts.movie );

cout<<" [starts at ";

printTime( ts.startTime );

cout<<", ends by ";

printTime(addMinutes(ts.startTime,ts.movie.duration));

cout<<"]";

cout << endl;
}
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nexTimeSlot;
    nexTimeSlot.movie = nextMovie;
    nexTimeSlot.startTime = addMinutes(ts.startTime, ts.movie.duration);
    return nexTimeSlot;
}
int main() 
{

    Movie movie1 = {"Back to the Future", COMEDY, 116};

    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};

    TimeSlot daytime = {movie2, {12, 15}};

    TimeSlot evening = {movie2, {16, 45}};
    
    TimeSlot noon = {movie1,{13,00}};

    TimeSlot night = {movie1,{20,20}};
    
    TimeSlot nexTimeSlot;
    nexTimeSlot = scheduleAfter(morning, movie2);
    printTimeSlotfunction(nexTimeSlot);

    printTimeSlotfunction( morning );
    printTimeSlotfunction( daytime );
    printTimeSlotfunction( evening );
    printTimeSlotfunction( noon );
    printTimeSlotfunction( night );

    return 0;
}

