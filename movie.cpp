#include "movie.h"

Movie::Movie() {}

Movie::Movie(string title, string director, int year, double rating, int actSize) {
  this->title = title;
  this->director = director;
  this->year = year;
  this->rating = rating;
  this->actors = new string[actSize];
  this->tailIndex = 0;
  this->actSize = actSize;
}

string Movie::toString() {
  string actorNames;

  for (int i = 0; i < this->actSize; i++) {
    if (this->actors[i] != "") {
      actorNames += "\n" + this->actors[i];
    }
  }

  if (actorNames == "") { actorNames = "\n"; }

  string str = "-----------------------------";
  str += "\nTitle: " + this->title +
    "\nDirector: " + this->director +
    "\nYear: " + to_string(this->year) +
    "\nRating: " + to_string(this->rating) +
    "\nActors: " + actorNames +
    "\n-----------------------------\n";
  return str;
}

string Movie::getTitle() {
  return this->title;
}

string Movie::getDirector() {
  return this->director;
}

double Movie::getRating() {
  return this->rating;
}

string* Movie::getActors() {
  return this->actors;
}

void Movie::setRating(double newRating) {
  this->rating = newRating;
}

void Movie::addActor(string name) {
  if (this->tailIndex == this->actSize - 1) {
    allocateNewActorSpace();
    addActorPrivate(name);
  } else {
    addActorPrivate(name);
  }
}

void Movie::addActorPrivate(string name) {
  this->actors[this->tailIndex + 1] = name;
  this->tailIndex++;
}

void Movie::allocateNewActorSpace() {
  this->actSize += 5;
  string* newActors = new string[this->actSize];
  for (int i = 0; i < actSize - 5; i++) {
    newActors[i] = this->actors[i];
  }
  this->actors = newActors;
}
