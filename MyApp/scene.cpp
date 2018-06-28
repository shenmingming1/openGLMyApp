//
//  scene.cpp
//  MyApp
//
//  Created by admin on 2018/6/24.
//  Copyright © 2018年 admin. All rights reserved.
//

#include "scene.hpp"
void Init(){
    glMatrixMode(GL_PROJECTION);
    gluPerspective(50.0f, 800.0f/600.0f, 0.1f, 1000.0f);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
/**
 GL_TRIANGLES图元
 每遇到3个顶点会绘制一个三角形
 */
void  Triangles(){
    glBegin(GL_TRIANGLES);
    glColor4ub(255, 255, 255, 255);
    glVertex3f(-0.2f, -0.2f, -1.5f);
    glColor4ub(255, 0, 0, 255);
    glVertex3f(0.2f, -0.2f, -1.5f);
    glColor4ub(0,255,0,255);
    glVertex3f(0.0, 0.2f, -1.5f);
    glEnd();
}

/**
 GL_TRIANGLE_STRIP图元
 三个顶点后，每多加一个顶点，就会多一个三角形
 */
void Triangles_strip(){
    glBegin(GL_TRIANGLE_STRIP);
    glColor4ub(255, 255, 255, 255); glVertex3f(-0.25f, -0.25f, -2.5f);
    glColor4ub(0, 0, 255, 255); glVertex3f(0.25f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255); glVertex3f(-0.25f, 0.25f, -2.5f);
    glColor4ub(255, 0, 0, 255); glVertex3f(0.25f, 0.25f, -2.5f);
    glColor4ub(255, 0, 0, 255); glVertex3f(-0.25f, 0.75f, -2.5f);
    glColor4ub(255, 0, 0, 255); glVertex3f(0.25f, 0.75f, -2.5f);
//    gl
    glEnd();
}

/**
 GL_TRIANGLE_FAN  图元
 以三个顶点后，以第一个顶点、最后一个顶点和添加的一个顶点话三角形
 */
void Triangles_fan(){
    glBegin(GL_TRIANGLE_FAN);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.0f, -0.25f, -2.5f);
    glColor4ub(255, 0, 0, 255);glVertex3f(0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.4f, 0.0f, -2.5f);
    glColor4ub(255, 255, 0, 255);glVertex3f(0.2f, 0.15f, -2.5f);
    glColor4ub(0, 255, 255, 255);glVertex3f(0.0f, 0.2f, -2.5f);
    glEnd();
}

/**
 GL_POINTS 图元
 顶点图元
 */
void Point(){
    glPointSize(10.0f);
    glBegin(GL_POINTS);
    glColor4ub(255, 0, 0, 255); glVertex3f(-0.25f, -0.25f, -1.0f);
    glColor4ub(0, 255, 0, 255); glVertex3f(0.25f, -0.25f, -1.0f);
    glColor4ub(0, 0, 255, 255); glVertex3f(0.0f, 0.25f, -1.0f);
    glEnd();
}

/**
 GL_LINES 图元
 线图元，只能两个顶点组成一条线。
 */
void Line(){
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor4ub(255, 0, 0, 255); glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255); glVertex3f(0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255); glVertex3f(0.5f, -0.25f, -2.5f);
    glColor4ub(0, 0, 255, 255); glVertex3f(1.0f, 0.25f, -2.5f);
    glEnd();
}

/**
 GL_LINE_LOOP 图元
 会形成一个闭环图形，把最后一个点和第一个点连起来
 三个顶点就会形成三角形。
 四个顶点就会形成四边形
 */
void Line_Loop(){
    glLineWidth(10.0f);
    glBegin(GL_LINE_LOOP);
    glColor4ub(255, 0, 0, 255);glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.5f,-0.25f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(1.0f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.5f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.0f,0.25f , -2.5f);
    glEnd();
}

/**
 GL_LINE_STRIP 图元，与GL_LINE_LOOP的区别是：
 不把最后一个点和第一个点连起来。
 */
void Line_Strip(){
    glLineWidth(10.0f);
    glBegin(GL_LINE_STRIP);
    glColor4ub(255, 0, 0, 255);glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.5f,-0.25f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(1.0f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.5f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.0f,0.25f , -2.5f);
    glEnd();
}

/**
 GL_QUADS 图元，GL_QUADS可以形成四边形
 */
void Quads(){
    glBegin(GL_QUADS);
    glColor4ub(255, 0, 0, 255);glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.5f,-0.25f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(1.0f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.5f,0.5f , -2.5f);
    glEnd();
}

/**
 GL_QUAD_STRIP 图元，四个顶点后，没多加两个点，
 就会让最后两个点和新形成的两个点形成四边形。
 */
void Quad_Strip(){
    glBegin(GL_QUAD_STRIP);
    glColor4ub(255, 0, 0, 255);glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.5f,-0.25f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(-0.5f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.5f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(-0.5f,0.75f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.5f,0.75f , -2.5f);
    glEnd();
}

/**
  GL_POLYGON 形成面的几何图形
 
 */
void Polygon(){
    glBegin(GL_POLYGON);
    glColor4ub(255, 0, 0, 255);glVertex3f(-0.5f, -0.25f, -2.5f);
    glColor4ub(0, 255, 0, 255);glVertex3f(0.5f,-0.25f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(1.0f,0.5f , -2.5f);
    glColor4ub(0, 0, 255, 255);glVertex3f(0.0f,0.5f , -2.5f);
    glEnd();
}
void Transltef(){
    glLoadIdentity();
    glTranslated(0.0f, 0.0f, -2.5f);
    glBegin(GL_TRIANGLES);
    glColor4ub(255, 255, 255, 255);glVertex3f(-0.2f, -0.2f,0.0f);
    glColor4ub(255, 0, 0, 255);glVertex3f(0.2f, -0.2f, 0.0f);
    glColor4ub(0,255,0,255);glVertex3f(0.0, 0.2f, 0.0f);
    glEnd();
}

/**
 旋转
 */
void Rotatef(){
    glLoadIdentity();
    glBegin(GL_TRIANGLES);
    glColor4ub(255, 255, 255, 255);glVertex3f(-0.5f, -0.5f,-2.5f);
    glColor4ub(255, 0, 0, 255);glVertex3f(0.5f, -0.5f, -2.5f);
    glColor4ub(0,255,0,255);glVertex3f(0.0, 0.5f, -2.5f);
    glEnd();
    glRotatef(30.0f, 0.0, 0.0, 1.0f);
    glBegin(GL_TRIANGLES);
    glColor4ub(255, 255, 255, 255);glVertex3f(-0.5f, -0.5f,-2.5f);
    glColor4ub(255, 0, 0, 255);glVertex3f(0.5f, -0.5f, -2.5f);
    glColor4ub(0,255,0,255);glVertex3f(0.0, 0.5f, -2.5f);
    glEnd();
    
}

/**
 glScaled 缩小了所有坐标系的值，因为离摄像机近了，所以大小从视觉上上没有变化。
 */
void Scale(){
    glLoadIdentity();
//    glBegin(GL_TRIANGLES);
//    glColor4ub(255, 255, 255, 255);glVertex3f(-0.5f, -0.5f,-5.0f);
//    glColor4ub(255, 0, 0, 255);glVertex3f(0.5f, -0.5f, -5.0f);
//    glColor4ub(0,255,0,255);glVertex3f(0.0, 0.5f, -5.0f);
//    glEnd();
    glScaled(0.2f, 0.2f, 0.2f);
    glBegin(GL_TRIANGLES);
    glColor4ub(255, 255, 255, 255);glVertex3f(-0.5f, -0.5f,-5.0f);
    glColor4ub(255, 0, 0, 255);glVertex3f(0.5f, -0.5f, -5.0f);
    glColor4ub(0,255,0,255);glVertex3f(0.0, 0.5f, -5.0f);
    glEnd();
}
void Draw(){
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
//    Triangles();
//    Triangles_strip();
//    Triangles_fan();
//    Point();
//    Line();
//    Line_Loop();
//    Line_Strip();
//    Quads();
//    Quad_Strip();
//    Polygon();
//    Transltef();
//    Rotatef();
    Scale();
}


