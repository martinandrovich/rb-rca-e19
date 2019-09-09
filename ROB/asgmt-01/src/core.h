#pragma once

#include <unistd.h>
#include <vector>
#include <string>
#include <iostream>

#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>

struct coords
{
	int x, y;
};

struct path
{
	coords begin;
	coords end;
	std::vector<coords> path;
};

void bug1();
void draw_test();
void draw_pixel(cv::Mat &img, cv::Point pos, cv::Vec3b color = {0, 0, 0});
void draw_line(cv::Mat &img, cv::Point2i begin, cv::Point2i end, cv::Vec3b color = {0, 0, 0});