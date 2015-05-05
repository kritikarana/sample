//
//  ViewController.h
//  sample
//
//  Created by admin on 4/2/15.
//  Copyright (c) 2015 admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#define no_of_days 365

@interface ViewController : UIViewController

{
    int x,y;
    NSString * empDepartment;
    NSArray * empListArray;
}
@property (nonatomic, strong) NSString * empName; //strong for non-scalar i.e. arrays and strings
@property (nonatomic, strong) NSArray * empArray;
@property (nonatomic, assign) int xOffset;        //assign for scalar i.e. int, double, float


//{
//int i;
//float b;
//double c;
//NSString * stringMY;
//}

//class method
+(void) classMethod;

//instance method
-(void) classMethod;

//1 paramenter and no return type
-(void) classMethod:(int)a;

//more than one parameter
-(void) classMethodWithAvalue:(int) aValue andBvalue: (int) bValue andCvalue:(float) cValue;

//declaring strings, arrays and dictionary
//-(void) classMethodwithAvalue: (NSString *)aStrValue andBvalue: (NSArray *) bArrValue andCvalue: (NSDictionary *) cDictValue;


@end

@interface MyClass: NSObject

@end
