#ifndef CONSTANTS_H
#define CONSTANTS_H

enum Colors {
    Red,
    Blue,
    None
};

enum StartMenu {
    TestingCode,
    RunCode
};

enum TestingCodes {
    Encoder,
    Forward,
    Backward,
    Left,
    Right,
    GetCdS,
    Stop

};

typedef struct  { //TODO
    double MiddleTop = 20;
} FieldXPositions;



typedef struct  { //TODO
    double Middle = 20;
    double AlignSink = 20;
} FieldYPositions;


typedef struct {
    double a90 = 206.7;

} AngleCounters;

#define a90 206.7



#define RobotWidth 8.3

#define RedMax .31
#define RedMin .29

#define BlueMax .6
#define BlueMin .4

#define StartLightMax .1
#define StartLightMin .10

#define Radius 1.75
#define CountsPerRev 180
#define PI 3.14159265358

#define BurgerRotMax 2445
#define BurgerRotMin 730

// TODO Add values
#define IceTrayRotMin 825
#define IceTrayRotMax 2155

#define StartAngle 30
#define DumpAngle 140

// TODO Add values
#define OrderSlideRotMin 1
#define OrderSlideRotMax 1

#define CountsPerInch 16.6

#define SlowSpeed 20

#define LCDBottom 239
#define LCDRight 319

#define TestMenuY 80
#define TestMenuX 100
#define TestMenuYOffset 35
#define TestMenuXOffset 5

#endif