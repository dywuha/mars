/**
 *
 * Author: Marc Khoury <khoury@eecs.berkeley.edu>
 *
 * Copyright (C) 2014 Marc Khoury
 *
 * This version is released under the Eclipse Public License
 * with the Graphviz distribution.
 *
 * A version is also available on GitHub: https://github.com/marckhoury/mars
 * If you make improvements or bug fixes to this code it would be much
 * appreciated if you could also contribute those changes back to the
 * GitHub repository.
 */

#ifndef LAYOUT_H
#define LAYOUT_H

#define real double
#define MIN(X,Y) (((X) > (Y)) ? (Y) : (X))
#define MAX(X,Y) (((X) > (Y)) ? (X) : (Y))

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <unistd.h>
#include <fcntl.h>

#include <graphviz/cgraph.h>
#include "sfdp/QuadTree.h"
#include "linalg.h"
#include "marsopts.h"
#include "dijkstra.h"
#include "marsviewer.h"

void dgeqrf_(const int* M, const int* N, double* A, const int* lda,
             double* TAU, double* work, const int* lwork, int* info);

void dorgqr_(const int* M, const int* N, const int* K, double* A, const int* lda,
             double* TAU, double* work, const int* lwork, int* info);

void dgeqrs_(const int* M, const int* N, const int* NRHS, double* A, const int* lda, 
             double* TAU, double* B, const int* ldb, double* work, const int* lwork,
             int* info);

void dtrtrs_(const char* UPLO, const char* TRANS, const char* DIAG, const int* N, 
             const int* NRHS, double* A, const int* lda, double* B, const int* ldb, 
             int* info);

mat mars(Agraph_t* g, struct marsopts opts);

#endif
