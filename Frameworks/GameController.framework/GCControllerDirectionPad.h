/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameController.framework/GameController
 */

@class GCControllerButtonInput, GCControllerAxisInput;

@interface GCControllerDirectionPad : GCControllerElement  {
}

@property(copy) id valueChangedHandler;
@property(readonly) GCControllerAxisInput * xAxis;
@property(readonly) GCControllerAxisInput * yAxis;
@property(readonly) GCControllerButtonInput * up;
@property(readonly) GCControllerButtonInput * down;
@property(readonly) GCControllerButtonInput * left;
@property(readonly) GCControllerButtonInput * right;


- (id)down;
- (id)up;
- (id)yAxis;
- (id)xAxis;
- (id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (BOOL)setHIDValue:(struct __IOHIDValue { }*)arg1;
- (id)left;
- (id)right;
- (id)description;

@end
