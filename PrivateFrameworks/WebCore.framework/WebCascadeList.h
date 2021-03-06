/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCascadeList : NSArray  {
    const struct Font { struct FontDescription { struct Vector<WTF::AtomicString, 1, WTF::CrashOnOverflow> { struct AtomicString {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; struct AlignedBuffer<4, 4> { BOOL x_4_3_1[4]; } x_1_2_4; } x_1_1_1; struct RefPtr<WebCore::FontFeatureSettings> { struct FontFeatureSettings {} *x_2_2_1; } x_1_1_2; float x_1_1_3; float x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 2; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 8; unsigned int x_1_1_12 : 3; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 2; unsigned int x_1_1_16 : 2; unsigned int x_1_1_17 : 2; unsigned int x_1_1_18 : 2; unsigned int x_1_1_19 : 4; unsigned int x_1_1_20 : 2; unsigned int x_1_1_21 : 2; unsigned int x_1_1_22 : 1; unsigned int x_1_1_23 : 7; } x1; struct RefPtr<WebCore::FontGlyphs> { struct FontGlyphs {} *x_2_1_1; } x2; float x3; float x4; boolx5; unsigned int x6 : 2; } *_font;
    int _character;
    unsigned int _count;
    struct Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow> { 
        struct RetainPtr<const __CTFontDescriptor *> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
        struct AlignedBuffer<64, 4> { 
            BOOL buffer[64]; 
        } m_inlineBuffer; 
    } _fontDescriptors;
}


- (id)initWithFont:(const struct Font { struct FontDescription { struct Vector<WTF::AtomicString, 1, WTF::CrashOnOverflow> { struct AtomicString {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; struct AlignedBuffer<4, 4> { BOOL x_4_3_1[4]; } x_1_2_4; } x_1_1_1; struct RefPtr<WebCore::FontFeatureSettings> { struct FontFeatureSettings {} *x_2_2_1; } x_1_1_2; float x_1_1_3; float x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 2; unsigned int x_1_1_8 : 1; unsigned int x_1_1_9 : 1; unsigned int x_1_1_10 : 1; unsigned int x_1_1_11 : 8; unsigned int x_1_1_12 : 3; unsigned int x_1_1_13 : 1; unsigned int x_1_1_14 : 1; unsigned int x_1_1_15 : 2; unsigned int x_1_1_16 : 2; unsigned int x_1_1_17 : 2; unsigned int x_1_1_18 : 2; unsigned int x_1_1_19 : 4; unsigned int x_1_1_20 : 2; unsigned int x_1_1_21 : 2; unsigned int x_1_1_22 : 1; unsigned int x_1_1_23 : 7; } x1; struct RefPtr<WebCore::FontGlyphs> { struct FontGlyphs {} *x_2_1_1; } x2; float x3; float x4; boolx5; unsigned int x6 : 2; }*)arg1 character:(int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
