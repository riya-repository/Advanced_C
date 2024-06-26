#include "status.h"

static char* unknownError = "Unknown error";

static char* msg[] = {
  "",
  "File open failed",
  "Access refused",
  "File close failed",
  "Memory allocation failed",
  "Wrong date",
  "Full structure",
  "Empty structure",
  "Value not found",
  "Value already exists",
  "index out of bounds",
  "unable to perform operation",
  "unable to find a city",
  "map loading fail",
  "Argument is less",
  "Argument is more",
  "unknown error"
};
char* message(status s) {
  return (s<0 || s >= ERRUNKNOWN) ? msg[ERRUNKNOWN] : msg[s];
}
