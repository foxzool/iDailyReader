#import <UIKit/UIKit.h>

@class FileModel;

@protocol PullingRefreshDelegate <NSObject>

-(BOOL)refreshData:(FileModel*)fileModel;
-(BOOL)loadMoreData:(FileModel*)fileModel;
-(NSArray*)parseData:(NSData*)data;
@end

@interface ContentViewController : UIViewController

@property(nonatomic,retain) UINavigationController *customNavigationController;
@property(nonatomic,assign)FileModel* fileModel;
@property(nonatomic,assign)id<PullingRefreshDelegate> delegate;

-(void)launchRefreshing;
-(void)tableViewDidFinishedLoading;
@end