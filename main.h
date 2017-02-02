/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.h
 * Author: jens
 *
 * Created on 2. Februar 2017, 16:02
 */

#ifndef MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAXPATHLENGTH   256

/*
 *  Datenstruktur for Configuration
 */
struct Clt_Conf
{
    int pos;
    int mode;
    char ipaddress;
    int port;
    int timeout;
    struct Clt_Conf *next_Clt_Conf;
};

struct Cfg
{
    char InfoPath[MAXPATHLENGTH];
    char LogPath[MAXPATHLENGTH];
    char VisuPath[MAXPATHLENGTH];
    char WebPath[MAXPATHLENGTH];
    int Clt_Cnt;
    int Svr_Port;
    struct Clt_Conf *Clt_Ptr;
};

#define MAIN_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* MAIN_H */

