/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBOpenGLContext : PBContext {
    void *_priv;
}

- (id)_compileFilter:(id)arg1;
- (unsigned int)_compileShader:(const char *)arg1 type:(unsigned int)arg2;
- (void)_createPixelBuffer:(struct __CVBuffer {}**)arg1 fromPool:(struct __CVPixelBufferPool { }*)arg2;
- (void)_createPixelBufferPools;
- (void)_debugDump;
- (BOOL)_registerFilter:(id)arg1;
- (unsigned int)_textureForLookupTableName:(id)arg1;
- (struct CGImage { }*)createCGImageForFilterViaGL:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (struct __CVPixelBufferPool { }*)largePool;
- (struct _CAImageQueue { }*)outputImageQueue;
- (void)preloadFilter:(id)arg1;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)setLargePool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setOutputImageQueue:(struct _CAImageQueue { }*)arg1;
- (void)setSmallPool:(struct __CVPixelBufferPool { }*)arg1;
- (struct __CVPixelBufferPool { }*)smallPool;

@end
