//
// Created by xinyang on 19-4-7.
//

#ifndef _ADDITIONS_H_
#define _ADDITIONS_H_

#include <serial/serial.h>
#include <opencv2/core.hpp>
#include <thread>

void save_video_file(cv::Mat &src);
void save_labelled_image(cv::Mat &src, cv::Rect2d box);


#endif /* _ADDITIONS_H_ */
