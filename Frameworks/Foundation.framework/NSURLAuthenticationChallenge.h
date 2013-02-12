/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject {
    NSURLAuthenticationChallengeInternal *_internal;
}

+ (id)_authenticationChallengeForCFAuthChallenge:(struct _CFURLAuthChallenge { }*)arg1 sender:(id)arg2;

- (struct _CFURLAuthChallenge { }*)_createCFAuthChallenge;
- (void)dealloc;
- (id)error;
- (id)failureResponse;
- (id)init;
- (id)initWithAuthenticationChallenge:(id)arg1 sender:(id)arg2;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(int)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;
- (int)previousFailureCount;
- (id)proposedCredential;
- (id)protectionSpace;
- (id)sender;

@end
