/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSLock, SSAccount;

@interface SSAccountStore : NSObject {
    NSArray *_accounts;
    BOOL _accountsValid;
    NSLock *_lock;
}

@property(readonly) NSArray * accounts;
@property(readonly) SSAccount * activeAccount;
@property(getter=isExpired,readonly) BOOL expired;

+ (id)defaultStore;
+ (id)existingDefaultStore;
+ (BOOL)isExpired;
+ (BOOL)isExpiredForTokenType:(int)arg1;
+ (void)resetExpiration;
+ (void)resetExpirationForTokenType:(int)arg1;
+ (void)setDefaultStore:(id)arg1;

- (id)_accountWithUniqueIdentifier:(id)arg1;
- (void)_invalidateAccounts;
- (void)_postAccountStoreChanged;
- (BOOL)_reloadAccountsIfNeeded;
- (void)_setAccounts:(id)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(BOOL)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (id)accounts;
- (id)activeAccount;
- (id)addAccount:(id)arg1 asActiveAccount:(BOOL)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)isExpired;
- (BOOL)isExpiredForTokenType:(int)arg1;
- (void)reloadAccounts;
- (void)resetExpiration;
- (void)resetExpirationForTokenType:(int)arg1;
- (void)setAccountCreditsWithDictionary:(id)arg1;
- (void)signOutAllAccounts;

@end
