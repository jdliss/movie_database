#include <string>
#include <iostream>

using namespace std;

class Movie {
 public:

  /* constructors */
  Movie();
  Movie(string, string, int, double, int);

  /* getters */
  string toString();
  string getTitle();
  string getDirector();
  double getRating();
  string* getActors();

  /* setters */
  void setRating(double);
  void addActor(string);

 private:

  /* private instance variables */
  string title, director;
  int year, tailIndex, actSize;
  double rating;
  string* actors;

  /* private helper methods */
  void addActorPrivate(string);
  void allocateNewActorSpace();
};
