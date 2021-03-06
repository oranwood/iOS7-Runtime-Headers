/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UISiriWaveyViewDelegate>, EAGLContext, CADisplayLink;

@interface _UISiriWaveyView : UIView  {
    struct { 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisX; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisY; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_axisZ; 
        struct { 
            float m_x; 
            float m_y; 
            float m_z; 
            float m_w; 
        } m_trans; 
    } _projection;
    CADisplayLink *_displayLink;
    EAGLContext *_eaglContext;
    unsigned int _framebufferHandle;
    unsigned int _renderbufferHandle;
    unsigned int _vertexBufferHandle;
    unsigned int _textureHandle;
    unsigned int _programHandle;
    int _attribPosition;
    int _uniformProjection;
    int _uniformOpacity;
    int _uniformLineWidth;
    int _uniformPowerLevel;
    int _uniformDisplayWidth;
    int _uniformTimeOffset;
    int _uniformTexture;
    int _viewWidth;
    int _viewHeight;
    float _projection11;
    double _startTime;
    float _runningPowerLevels[5];
    unsigned int _powerPointer;
    BOOL _isInitialized;
    BOOL _justStarted;
    int _state;
    <_UISiriWaveyViewDelegate> *_delegate;
    int _mode;
}

@property <_UISiriWaveyViewDelegate> * delegate;
@property int mode;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (BOOL)inSiriMode;
- (BOOL)inDictationMode;
- (void)_updateOrthoProjection;
- (BOOL)_resizeFromLayer:(id)arg1;
- (BOOL)_initGL;
- (BOOL)_setupTexture;
- (BOOL)_setupVertexBuffer;
- (BOOL)_setupShaders;
- (BOOL)_setupFramebuffer;
- (void)_updateCurveLayer:(id)arg1;
- (void)_setupDisplayLink;
- (void)_cleanupGL;
- (void)_tearDownDisplayLink;
- (float)_currentMicPowerLevel;
- (float)_powerLevelForMicPower:(float)arg1;
- (float)_updateMedianWithNewValue:(float)arg1;
- (void)startListening;
- (int)mode;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)start;

@end
