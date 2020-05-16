/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-15 00:42:16
 * @LastEditTime: 2020-05-16 09:19:03
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */
#ifndef _HTTP_CONFIG_H_
#define _HTTP_CONFIG_H_

#define             LOG_IS_SALOF

#define             LOG_LEVEL                   DEBUG_LEVEL   //WARN_LEVEL DEBUG_LEVEL INFO_LEVEL

#ifdef LOG_IS_SALOF
    #define         USE_LOG                     (1U)
    #define         USE_SALOF                   (1U)
    #define         SALOF_OS                    USE_LINUX
    #define         USE_IDLE_HOOK               (0U)
    #define         LOG_COLOR                   (1U)
    #define         LOG_TS                      (1U)
    #define         LOG_TAR                     (0U)
    #define         SALOF_BUFF_SIZE             (1024*10U)
    #define         SALOF_FIFO_SIZE             (1024*10U)
    #define         SALOF_TASK_STACK_SIZE       (2048U)
    #define         SALOF_TASK_TICK             (50U)
#endif

#define     HTTP_NO                             0
#define     HTTP_YES                            1

#define     HTTP_DEFAULT_BUF_SIZE               1024
#define     HTTP_DEFAULT_CMD_TIMEOUT            10000
#define     HTTP_MAX_CMD_TIMEOUT                20000
#define     HTTP_MIN_CMD_TIMEOUT                1000
#define     HTTP_KEEP_ALIVE_INTERVAL            20      // unit: second
#define     HTTP_RECONNECT_DEFAULT_DURATION     1000
#define     HTTP_THREAD_STACK_SIZE              2048
#define     HTTP_THREAD_PRIO                    10
#define     HTTP_THREAD_TICK                    50

// #define     HTTP_NETWORK_TYPE_NO_TLS

#endif /* _HTTP_CONFIG_H_ */

