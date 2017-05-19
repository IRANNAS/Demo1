//
//  ViewController.h
//  avPlayerDemo
//
//  Created by Irannas on 19/05/17.
//  Copyright © 2017 ducont. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreAudioKit/CoreAudioKit.h>
#import <AVFoundation/AVFoundation.h>
#import <CoreMedia/CoreMedia.h>
#import <MediaPlayer/MediaPlayer.h>
#import "GVMusicPlayerController.h"
#import "NSString+TimeToString.h"
@interface ViewController : UIViewController<MPMediaPickerControllerDelegate,GVMusicPlayerControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *songLabel;
@property (weak, nonatomic) IBOutlet UILabel *artistLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UIButton *playPauseButton;
@property (weak, nonatomic) IBOutlet UISlider *progressSlider;
@property (weak, nonatomic) IBOutlet UISlider *volumeSlider;
@property (weak, nonatomic) IBOutlet UILabel *trackCurrentPlaybackTimeLabel;
@property (weak, nonatomic) IBOutlet UILabel *trackLengthLabel;
@property (weak, nonatomic) IBOutlet UIView *chooseView;
@property (weak, nonatomic) IBOutlet UIButton *repeatButton;
@property (weak, nonatomic) IBOutlet UIButton *shuffleButton;
@property (strong, nonatomic) NSTimer *timer;
@property BOOL panningProgress;
@property BOOL panningVolume;
@property(nonatomic,strong) AVPlayer *player;

-(IBAction) BtnPlay:(id)sender;
-(IBAction) BtnPause:(id)sender;
-(IBAction) BtnNext:(id)sender;
-(IBAction) BtnPrevious:(id)sender;
-(void) setupAVPlayerForURL: (NSURL*) url;
@end

