/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSISLinearExpression : NSObject <NSISRowBody, NSFastEnumeration> {
    unsigned int inline_capacity;
    unsigned int var_count;
    double constant;
    union { 
        struct { 
            id stored_extern_marker; 
            struct { /* ? */ } *slab; 
            unsigned int capacity; 
        } extern_data; 
        struct { 
            unsigned long aligner; 
        } inline_slab; 
        unsigned char padding[36]; 
        void *_workaround13455311; 
    } data;
}

@property double constant;

+ (id)newExpressionWithCapacity:(unsigned int)arg1;
+ (id)acquireFromPoolForUseCase:(int)arg1;

- (id)init;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)returnToPool;
- (id)variablesArray;
- (void)setCoefficient:(double)arg1 forVariable:(id)arg2;
- (id)initWithInlineCapacity:(unsigned int)arg1;
- (void)setConstant:(double)arg1;
- (unsigned int)variableCount;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2;
- (BOOL)isConstant;
- (BOOL)enumerateVariablesAndCoefficientsUntil:(id)arg1;
- (id)copyContentsAndReturnToPool;
- (void)addExpression:(id)arg1 times:(double)arg2;
- (void)replaceVariable:(id)arg1 withVariablePlusDelta:(double)arg2 timesVariable:(id)arg3 processVariableNewToReceiver:(id)arg4 processVariableDroppedFromReceiver:(id)arg5;
- (void)replaceVariable:(id)arg1 withVariable:(id)arg2 coefficient:(double)arg3;
- (double)coefficientForVariable:(id)arg1;
- (void)replaceVariable:(id)arg1 withExpression:(id)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)addExpression:(id)arg1 times:(double)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)addVariable:(id)arg1 coefficient:(double)arg2 processVariableNewToReceiver:(id)arg3 processVariableDroppedFromReceiver:(id)arg4;
- (void)removeVariable:(id)arg1;
- (void)enumerateVariables:(id)arg1;
- (void)enumerateVariablesAndCoefficients:(id)arg1;
- (double)constant;
- (void)verifyInternalIntegrity;
- (double)incrementConstant:(double)arg1;
- (void)addVariable:(id)arg1 coefficient:(double)arg2;
- (void)scaleBy:(double)arg1;

@end
