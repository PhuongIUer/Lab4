/*
 * scheduler.h
 *
 *  Created on: May 19, 2024
 *      Author: HTH
 */

#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#include <stdint.h>

typedef struct
{
  void (*pTask)(void);
  uint32_t Delay;
  uint32_t Period;
  uint8_t RunMe;

  uint32_t TaskID;

} sTasks;

#define SCH_MAX_TASKS 50

void SCH_Init(void);                   // initialize the scheduler (TODO: implement this function if needed in the future)
void SCH_Add_Task(void (*pFunction)(), // pointer to the task
                  uint32_t DELAY,      // delay before first execution
                  uint32_t PERIOD);    // period of the task
void SCH_Update(void);                 // update the tasks (call this function in the timer interrupt)
void SCH_DispatchTasks(void);          // execute the tasks (call this function in the main loop)

#endif /* INC_SCHEDULER_H_ */
