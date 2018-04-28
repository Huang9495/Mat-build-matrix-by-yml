  //Mat feature;

#include "dtalgo.h"
#include "compute.h"
#include "types.h"
#include "utils.h"
#include "detect.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iostream>
#include <vector>
#include <deque>
#include <iostream>
#include <sstream>
#include <fstream>



#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#define DEBUG_PRINTF 0

using namespace cv;


FileStorage fs2("input_route",cv::FileStorage::READ);
fs2["datas"] >> feature;
std::cout << feature << std::endl;
