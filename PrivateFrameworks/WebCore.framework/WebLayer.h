/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface WebLayer : CALayer {
    struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x3; struct IntSize { 
            int m_width; 
            int m_height; 
        } x4; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x5; struct FloatPoint3D { 
            float m_x; 
            float m_y; 
            float m_z; 
        } x6; struct FloatSize { 
            float m_width; 
            float m_height; 
        } x7; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x8; struct TransformationMatrix { 
            double m_matrix[4][4]; 
        } x9; struct Color { 
            unsigned int m_color; 
            boolm_valid; 
        } x10; float x11; float x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; int x20; int x21; int x22; struct Vector<WebCore::GraphicsLayer*,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { 
                struct GraphicsLayer {} **m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x23; struct GraphicsLayer {} *x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct FloatPoint { 
            float m_x; 
            float m_y; 
        } x28; struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } x29; int x30; } *m_layerOwner;
}

+ (void)drawContents:(struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { unsigned int x_10_1_1; boolx_10_1_2; } x10; float x11; float x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; int x20; int x21; int x22; struct Vector<WebCore::GraphicsLayer*,0ul> { unsigned int x_23_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; unsigned int x_2_2_2; } x_23_1_2; } x23; struct GraphicsLayer {} *x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct FloatPoint { float x_28_1_1; float x_28_1_2; } x28; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_29_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_29_1_2; } x29; int x30; }*)arg1 ofLayer:(id)arg2 intoContext:(struct CGContext { }*)arg3;

- (struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { unsigned int x_10_1_1; boolx_10_1_2; } x10; float x11; float x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; int x20; int x21; int x22; struct Vector<WebCore::GraphicsLayer*,0ul> { unsigned int x_23_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; unsigned int x_2_2_2; } x_23_1_2; } x23; struct GraphicsLayer {} *x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct FloatPoint { float x_28_1_1; float x_28_1_2; } x28; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_29_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_29_1_2; } x29; int x30; }*)layerOwner;
- (id)actionForKey:(id)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (void)setLayerOwner:(struct GraphicsLayer { int (**x1)(); struct GraphicsLayerClient {} *x2; struct String { struct RefPtr<WebCore::StringImpl> { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct IntSize { int x_4_1_1; int x_4_1_2; } x4; struct FloatPoint { float x_5_1_1; float x_5_1_2; } x5; struct FloatPoint3D { float x_6_1_1; float x_6_1_2; float x_6_1_3; } x6; struct FloatSize { float x_7_1_1; float x_7_1_2; } x7; struct TransformationMatrix { double x_8_1_1[4][4]; } x8; struct TransformationMatrix { double x_9_1_1[4][4]; } x9; struct Color { unsigned int x_10_1_1; boolx_10_1_2; } x10; float x11; float x12; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; int x20; int x21; int x22; struct Vector<WebCore::GraphicsLayer*,0ul> { unsigned int x_23_1_1; struct VectorBuffer<WebCore::GraphicsLayer*,0ul> { struct GraphicsLayer {} **x_2_2_1; unsigned int x_2_2_2; } x_23_1_2; } x23; struct GraphicsLayer {} *x24; struct GraphicsLayer {} *x25; struct GraphicsLayer {} *x26; struct GraphicsLayer {} *x27; struct FloatPoint { float x_28_1_1; float x_28_1_2; } x28; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_29_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_29_1_2; } x29; int x30; }*)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
