//
//  ViewController.h
//  实现拖动列表时放大列表顶部的图片
//
//  Created by 陈家庆 on 15-2-27.
//  Copyright (c) 2015年 shikee_Chan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>{
    
    UIImageView *_zoomImageView;//变焦图片做底层
    
    UIImageView *_circleView;//类似头像的UIImageView
    UILabel *_textLabel;//类似昵称UILabel
}

@property(nonatomic,strong)UITableView *tableView;

@end
