#ifndef FASTSLAM2_SIM_H
#define FASTSLAM2_SIM_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <vector>
#include <Eigen/Dense>

#include "core/configfile.h"
#include "core/compute_steering.h"
#include "core/predict_true.h"
#include "core/particle.h"

using namespace std;
using namespace Eigen;

vector<Particle> fastslam1_sim(MatrixXf lm, MatrixXf wp);
MatrixXf make_laser_lines(vector<VectorXf> rb, VectorXf xv);

#endif //FASTSLAM2_SIM_H
