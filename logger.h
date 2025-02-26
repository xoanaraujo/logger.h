#ifndef LOGGER_H
#define LOGGER_H

#ifndef LOG_OUT
#define LOG_OUT stderr
#endif // LOG_OUT

#ifndef UPDATE_TIMESTAMP
#define UPDATE_TIMESTAMP                                                       \
  now = time(NULL);                                                            \
  strftime(time_info, 100, "%Y-%m-%d %H:%M:%S%z (%Z)", gmtime(&now));
#endif // ifndef UPDATE_TIMESTAMP 

#ifdef LOG_LEVEL_TRACE

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [TRACE]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_DEBUG(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [DEBUG]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_INFO(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [INFO ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_WARN(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [WARN ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_ERROR(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [ERROR]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#elif defined(LOG_LEVEL_DEBUG)

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)
#define LOG_DEBUG(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [DEBUG]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_INFO(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [INFO ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_WARN(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [WARN ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_ERROR(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [ERROR]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#elif defined(LOG_LEVEL_INFO)

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)
#define LOG_DEBUG(category, message)
#define LOG_INFO(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [INFO ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_WARN(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [WARN ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_ERROR(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [ERROR]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#elif defined(LOG_LEVEL_WARN)

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)
#define LOG_DEBUG(category, message)
#define LOG_INFO(category, message)
#define LOG_WARN(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [WARN ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_ERROR(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [ERROR]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#elif defined(LOG_LEVEL_ERROR)

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)
#define LOG_DEBUG(category, message)
#define LOG_INFO(category, message)
#define LOG_WARN(category, message)
#define LOG_ERROR(category, message)                                           \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [ERROR]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#elif defined(LOG_LEVEL_CRIT)

#include <stdio.h>
#include <time.h>

static time_t now;
static char time_info[100];

#define LOG_TRACE(category, message)
#define LOG_DEBUG(category, message)
#define LOG_INFO(category, message)
#define LOG_WARN(category, message)
#define LOG_ERROR(category, message)
#define LOG_CRIT(category, message)                                            \
  UPDATE_TIMESTAMP                                                             \
  fprintf(LOG_OUT, "%s [CRIT ]: %s, line %d. [%s] %s\n", time_info, __FILE__,        \
          __LINE__, category, message);

#else

#define LOG_TRACE(message)
#define LOG_DEBUG(message)
#define LOG_INFO(message)
#define LOG_WARN(message)
#define LOG_ERROR(message)
#define LOG_CRIT(message)

#endif // ifndef LOG_LEVEL_TRACE

#endif // ifndef LOGGER_H
