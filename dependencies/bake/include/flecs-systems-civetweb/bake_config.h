/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef FLECS_SYSTEMS_CIVETWEB_BAKE_CONFIG_H
#define FLECS_SYSTEMS_CIVETWEB_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>
#include <flecs_util.h>
#include <flecs_components_http.h>
#ifdef __BAKE__
#include <bake_util.h>
#endif

/* Headers of private dependencies */
#ifdef FLECS_SYSTEMS_CIVETWEB_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef FLECS_SYSTEMS_CIVETWEB_STATIC
  #if FLECS_SYSTEMS_CIVETWEB_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define FLECS_SYSTEMS_CIVETWEB_EXPORT __declspec(dllexport)
  #elif FLECS_SYSTEMS_CIVETWEB_IMPL
    #define FLECS_SYSTEMS_CIVETWEB_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define FLECS_SYSTEMS_CIVETWEB_EXPORT __declspec(dllimport)
  #else
    #define FLECS_SYSTEMS_CIVETWEB_EXPORT
  #endif
#else
  #define FLECS_SYSTEMS_CIVETWEB_EXPORT
#endif

#endif

