/*
 * flowDefine.h
 *
 *  Created on: Jul 14, 2024
 *      Author: NguyenKimQuoc
 */

#ifndef TARGET_FLOWDEFINE_H_
#define TARGET_FLOWDEFINE_H_

#define TEMP_FLOW			0
#define SPO2_FLOW			1
#define AUS_FLOW			2
#define ECG_FLOW			3

#define EXAM_TYPE			0
#define TEMP_FLOW_IR_VALUE 	0
#define TEMP_FLOW_CONTACT_VALUE 	1
#define SPO2_FLOW_VALUE 	2
#define AUS_FLOW_VALUE 		3
#define ECG_FLOW_VALUE 		4


#define EXAM_ITEM_TYPE		1
#define AUS_OWNER_TYPE 		EXAM_ITEM_TYPE
#define AUS_LEFT_SIDE		0
#define AUS_RIGHT_SIDE		1

#define AUS_DOCTOR_TYPE 	EXAM_ITEM_TYPE
#define AUS_HEART			0
#define AUS_LUNG			1
#define AUS_OTHERS			2

#define EXAM_ITEM_ITEM_TYPE	2
#define AUS_NIPPLE_FLOW 	EXAM_ITEM_ITEM_TYPE
#define AUS_NIPPLE_M		0
#define AUS_NIPPLE_L1		1
#define AUS_NIPPLE_T		0
#define AUS_NIPPLE_L2		1






#endif /* TARGET_FLOWDEFINE_H_ */
