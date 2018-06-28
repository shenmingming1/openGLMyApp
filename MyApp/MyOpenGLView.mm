//
//  MyOpenGLView.m
//  MyApp
//
//  Created by admin on 2018/6/23.
//  Copyright © 2018年 admin. All rights reserved.
//

#import "MyOpenGLView.h"
#include "scene.hpp"
@implementation MyOpenGLView
-(void)prepareOpenGL{
    [super prepareOpenGL];
    Init();
    [NSTimer scheduledTimerWithTimeInterval:0.016 target:self selector:@selector(renderOneFrame) userInfo:nil repeats:YES];
}

- (void)drawRect:(NSRect)dirtyRect {
    [super drawRect:dirtyRect];
    Draw();
    glFlush();
    // Drawing code here.
}
-(void)renderOneFrame{
    [self setNeedsDisplay:YES];
}
@end
