/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUIComposeTextFieldConfiguration : NSObject  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderInsets;
    int _columnIndex;
    BOOL _isRequired;
    NSString *_label;
    unsigned int _maxLength;
    NSString *_placeholder;
    NSString *_value;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderInsets;
@property int columnIndex;
@property(copy) NSString * label;
@property unsigned int maxLength;
@property(copy) NSString * placeholder;
@property(getter=isRequired) BOOL required;
@property(copy) NSString * value;


- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;
- (int)columnIndex;
- (void)setColumnIndex:(int)arg1;
- (BOOL)isRequired;
- (void)setMaxLength:(unsigned int)arg1;
- (unsigned int)maxLength;
- (void)setRequired:(BOOL)arg1;
- (id)label;
- (void).cxx_destruct;
- (id)placeholder;
- (void)setLabel:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
