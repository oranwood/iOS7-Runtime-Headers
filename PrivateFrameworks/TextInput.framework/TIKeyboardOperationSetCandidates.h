/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIKeyboardOperationSetMarkedText, TIKeyboardCandidateResultSet;

@interface TIKeyboardOperationSetCandidates : TIKeyboardOperation  {
    TIKeyboardCandidateResultSet *_candidateSet;
    TIKeyboardOperationSetMarkedText *_documentOperation;
}

@property(readonly) TIKeyboardOperationSetMarkedText * documentOperation;
@property(readonly) TIKeyboardCandidateResultSet * candidateSet;

+ (id)operationWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
+ (id)operationWithCandidateResultSet:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)documentOperation;
- (id)candidateSet;
- (id)initWithCandidateResultSet:(id)arg1 documentOperation:(id)arg2;
- (id)propertiesForDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)main;

@end
