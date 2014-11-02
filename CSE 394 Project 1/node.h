//
//  node.h
//  CSE 394 Project 1
//
//  Created by Derek Bixler on 9/29/14.
//  Copyright (c) 2014 Derek Bixler. All rights reserved.
//

#ifndef CSE_394_Project_1_node_h
#define CSE_394_Project_1_node_h

typedef struct node {
    int data;
    node *prev;
    node *next;
} node;

#endif
