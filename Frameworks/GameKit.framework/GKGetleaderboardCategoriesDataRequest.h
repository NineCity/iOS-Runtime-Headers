/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKLeaderboardCategory, GKPlayer, NSArray;

@interface GKGetleaderboardCategoriesDataRequest : GKDataRequest {
    GKLeaderboardCategory *_aggregateCategory;
    NSArray *_categories;
    GKGame *_game;
    GKPlayer *_player;
}

@property(retain) GKLeaderboardCategory * aggregateCategory;
@property(retain) NSArray * categories;
@property(retain) GKGame * game;
@property(retain) GKPlayer * player;

- (id)aggregateCategory;
- (id)cacheKey;
- (int)cacheType;
- (id)categories;
- (void)dealloc;
- (id)game;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (id)player;
- (id)request;
- (void)setAggregateCategory:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;

@end
