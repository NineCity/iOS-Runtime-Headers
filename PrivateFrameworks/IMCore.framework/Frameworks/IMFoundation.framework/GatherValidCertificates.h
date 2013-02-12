/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString;

@interface GatherValidCertificates : IMThreadedWorkUnit {
    NSArray *_certs;
    BOOL _forMe;
    NSString *_screenName;
    unsigned int _usage;
}

@property(readonly) NSArray * certificates;
@property(readonly) NSString * screenName;

+ (id)gatherCertsForScreenName:(id)arg1 usage:(unsigned int)arg2 forMyUse:(BOOL)arg3;

- (void)_workerThread;
- (void)_workerThreadFinished;
- (id)certificates;
- (void)dealloc;
- (id)initWithScreenName:(id)arg1 usage:(unsigned int)arg2 forMyUse:(BOOL)arg3;
- (id)screenName;

@end
