/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLSingleTexturedGroupCullableMesh : VGLGroupCullableMesh  {
    VGLTexture *_texture;
}

@property(retain) VGLTexture * texture;


- (void)setTexture:(id)arg1;
- (id)texture;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 context:(id)arg3;
- (void)drawGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg1 context:(id)arg2;
- (void)drawInPreparedCulls:(id)arg1;
- (void)drawInPreparedCulls:(id)arg1 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg2;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 rectCount:(unsigned int)arg2 excludeGroups:(const struct vector<unsigned int, vk_allocator<unsigned int> > { }*)arg3 context:(id)arg4;
- (void)dealloc;

@end
