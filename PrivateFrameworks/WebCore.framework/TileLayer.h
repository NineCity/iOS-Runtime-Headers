/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CALayer, WebThreadCaller;

@interface TileLayer : CALayer {
    struct TileCache { struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; int x8; in double x9; out void*x10; void*x11; struct RetainPtr<WebThreadCaller> { 
            WebThreadCaller *m_ptr; 
        } x12; int x13; int x14; id x15; void*x16; inout unsigned short x17; unsigned short x18; void*x19; const int x20; in void*x21; void*x22; struct IntPoint { 
            int m_x; 
            int m_y; 
        } x23; struct IntSize { 
            int m_width; 
            int m_height; 
        } x24; boolx25; boolx26; struct HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > > { 
            struct HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits> { 
                struct pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> > {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x27; struct Timer<WebCore::TileCache> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            int m_heapIndex; 
            unsigned int m_heapInsertionOrder; 
            struct TileCache {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x28; struct Vector<WebCore::IntRect,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WebCore::IntRect,0ul> { 
                struct IntRect {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x29; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x30; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x31; } *_tileCache;
}

- (id)actionForKey:(id)arg1;
- (void)display;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithTileCache:(struct TileCache { struct RetainPtr<CALayer> { id x_1_1_1; } x1; id x2; struct RetainPtr<WebThreadCaller> { id x_3_1_1; } x3; int x4; int x5; id x6; struct IntPoint { int x_7_1_1; int x_7_1_2; } x7; struct IntSize { int x_8_1_1; int x_8_1_2; } x8; boolx9; boolx10; struct HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > > { struct HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits> { struct pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_11_1_1; } x11; struct Timer<WebCore::TileCache> { int (**x_12_1_1)(); double x_12_1_2; double x_12_1_3; int x_12_1_4; unsigned int x_12_1_5; struct TileCache {} *x_12_1_6; struct { int *x_7_2_1; } x_12_1_7; } x12; struct Vector<WebCore::IntRect,0ul> { unsigned int x_13_1_1; struct VectorBuffer<WebCore::IntRect,0ul> { struct IntRect {} *x_2_2_1; unsigned int x_2_2_2; } x_13_1_2; } x13; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_14_1_1; } x14; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_15_1_1; } x15; }*)arg1;
- (void)removeFromSuperlayer;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
