#include "library.h"

Library::Library(int maxMovies) {
  this->movies = new Movie[maxMovies];
  this->numMovies = 0;
  this->tailIndex = -1;
  this->maxMovies = maxMovies;
}

int Library::getNumberOfMovies(){
  return this->numMovies;
}

void Library::addMovie(Movie mov) {
  if (this->tailIndex == this->maxMovies - 1) {
    allocateNewMovieSpace();
    addMoviePrivate(mov);
  } else {
    addMoviePrivate(mov);
  }
}

double Library::averageRating() {
  double sum = 0;
  for (int i = 0; i < this->numMovies; i++) {
    sum += this->movies[i].getRating();
  }
  return sum / this->numMovies;
}

void Library::printLibrary() {
  for (int i = 0; i < this->numMovies; i++) {
    cout << this->movies[i].toString() << endl;
  }
}

void Library::addMoviePrivate(Movie mov) {
  this->numMovies++;
  this->movies[this->tailIndex + 1] = mov;
  this->tailIndex++;
}

void Library::allocateNewMovieSpace() {
  this->maxMovies += 5;
  Movie* newMovies = new Movie[this->maxMovies];
  for (int i = 0; i < this->maxMovies - 5; i++) {
    newMovies[i] = this->movies[i];
  }
  this->movies = newMovies;
}
