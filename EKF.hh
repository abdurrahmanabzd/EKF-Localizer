/*============================================= 
EXTENDED KALMAN FILTER LOCALIZER      <EKF.hh>

============================================= */

#ifndef EKF_LOCALIZER
#define EKF_LOCALIZER

#include <Eigen/Dense>

class EKF {
public:
    EKF() { //Initializing
        mu << 0, 0, 0;
        Sigma << 0.025, 0, 0,
                 0, 0.0025, 0,
                 0, 0, 0.0025;

        Q << 0.0025, 0, 0,
             0, 0.0025, 0,
             0, 0, 0.0025;

        a1 = 0.1; //alpha 1
        a2 = 0.1; //alpha 2
        a3 = 0.1; //alpha 3
        a4 = 0.1; //alpha 4

        prior_timestamp = 0.0;
    }

private:
    Eigen::Vector3d mu; //estimated state vector [x, y, theta]
    Eigen::Matrix3d Sigma;
    Eigen::Matrix3d Q;
    Eigen::Matrix3d C;
    C << 1, 0, 0,
        0, 1, 0,
        0, 0, 1;

    double a1, a2, a3, a4;
    double prior_timestamp;

/*----------------------------------------------
PREDICTION FUNCTION
----------------------------------------------*/


/*----------------------------------------------
MEASUREMENT UPDATE FUNCTION
----------------------------------------------*/
    
};

#endif // EKF_LOCALIZER
