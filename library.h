#include "movie.h"

class Library {
 public:

  /* constructor */
  Library(int);

  /* getters */
  int getNumberOfMovies();

  /* setters */
  void addMovie(Movie);

  /* other methods */
  void printLibrary();
  double averageRating();


 private:

  /* private instance variables */
  Movie* movies;
  int numMovies, tailIndex, maxMovies;

  /* private methods */
  void allocateNewMovieSpace();
  void addMoviePrivate(Movie);
};
