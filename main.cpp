#include "library.h"

int main() {
  Movie mov = Movie("The Knicks", "Phil Jackson", 1997, 4.5, 10);
  mov.addActor("Carmelo Anthony");
  mov.addActor("Derrick Rose");

  Movie mov2 = Movie("Shrek", "Ohhhh Boy", 2003, 3.1, 10);
  mov2.addActor("Shrek Ogre");
  mov2.addActor("Prince Farquad");

  Movie mov3 = Movie("Rick and Morty", "This Guy Right Here", 1989, 2.5, 10);
  mov3.addActor("Beth Smith");
  mov3.addActor("Morty Smith");
  mov3.addActor("Rick Sanchez");

  Library lib = Library(5);
  lib.addMovie(mov);
  lib.addMovie(mov2);
  lib.addMovie(mov3);

  cout << "Jonathan's Movie Library" << endl;
  lib.printLibrary();
  cout << "Number of movies: " << lib.getNumberOfMovies() << endl;
  cout << "Average Movie Rating: " << lib.averageRating() << endl;

  return 0;
}
