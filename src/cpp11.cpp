// Generated by cpp11: do not edit by hand
// clang-format off


#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// bilinear.cpp
cpp11::writable::doubles bilinear_c(cpp11::doubles x_breaks, cpp11::doubles y_breaks, cpp11::doubles_matrix<> grid, cpp11::doubles x, cpp11::doubles y);
extern "C" SEXP _particles_bilinear_c(SEXP x_breaks, SEXP y_breaks, SEXP grid, SEXP x, SEXP y) {
  BEGIN_CPP11
    return cpp11::as_sexp(bilinear_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(x_breaks), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(y_breaks), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(grid), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(x), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(y)));
  END_CPP11
}
// collision.cpp
cpp11::writable::doubles_matrix<> collision_c(cpp11::doubles_matrix<> pos, cpp11::doubles_matrix<> vel, cpp11::doubles radii, double strength);
extern "C" SEXP _particles_collision_c(SEXP pos, SEXP vel, SEXP radii, SEXP strength) {
  BEGIN_CPP11
    return cpp11::as_sexp(collision_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(pos), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(vel), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(radii), cpp11::as_cpp<cpp11::decay_t<double>>(strength)));
  END_CPP11
}
// nbody.cpp
cpp11::writable::doubles_matrix<> nbody_c(cpp11::doubles_matrix<> pos, cpp11::doubles strength, double theta, double min_dist, double max_dist, double alpha);
extern "C" SEXP _particles_nbody_c(SEXP pos, SEXP strength, SEXP theta, SEXP min_dist, SEXP max_dist, SEXP alpha) {
  BEGIN_CPP11
    return cpp11::as_sexp(nbody_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(pos), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles>>(strength), cpp11::as_cpp<cpp11::decay_t<double>>(theta), cpp11::as_cpp<cpp11::decay_t<double>>(min_dist), cpp11::as_cpp<cpp11::decay_t<double>>(max_dist), cpp11::as_cpp<cpp11::decay_t<double>>(alpha)));
  END_CPP11
}
// pathdist.cpp
cpp11::writable::list points_to_path_c(cpp11::doubles_matrix<> pos, cpp11::list_of< cpp11::doubles_matrix<> > path, bool close);
extern "C" SEXP _particles_points_to_path_c(SEXP pos, SEXP path, SEXP close) {
  BEGIN_CPP11
    return cpp11::as_sexp(points_to_path_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(pos), cpp11::as_cpp<cpp11::decay_t<cpp11::list_of< cpp11::doubles_matrix<> >>>(path), cpp11::as_cpp<cpp11::decay_t<bool>>(close)));
  END_CPP11
}
// pathdist.cpp
cpp11::writable::list points_to_lines_c(cpp11::doubles_matrix<> line1, cpp11::doubles_matrix<> line2, cpp11::doubles_matrix<> point);
extern "C" SEXP _particles_points_to_lines_c(SEXP line1, SEXP line2, SEXP point) {
  BEGIN_CPP11
    return cpp11::as_sexp(points_to_lines_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(line1), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(line2), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(point)));
  END_CPP11
}
// pathdist.cpp
cpp11::writable::doubles angle_diff_c(cpp11::doubles_matrix<> a, cpp11::doubles_matrix<> b);
extern "C" SEXP _particles_angle_diff_c(SEXP a, SEXP b) {
  BEGIN_CPP11
    return cpp11::as_sexp(angle_diff_c(cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(a), cpp11::as_cpp<cpp11::decay_t<cpp11::doubles_matrix<>>>(b)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_particles_angle_diff_c",      (DL_FUNC) &_particles_angle_diff_c,      2},
    {"_particles_bilinear_c",        (DL_FUNC) &_particles_bilinear_c,        5},
    {"_particles_collision_c",       (DL_FUNC) &_particles_collision_c,       4},
    {"_particles_nbody_c",           (DL_FUNC) &_particles_nbody_c,           6},
    {"_particles_points_to_lines_c", (DL_FUNC) &_particles_points_to_lines_c, 3},
    {"_particles_points_to_path_c",  (DL_FUNC) &_particles_points_to_path_c,  3},
    {NULL, NULL, 0}
};
}

extern "C" attribute_visible void R_init_particles(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  R_forceSymbols(dll, TRUE);
}