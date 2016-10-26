/*
 
 Abstract:
 Table view controller that displays events occuring within the next 24 hours. Prompts a user for access to their Calendar, then updates its UI according to their response.
*/

#import <AVFoundation/AVFoundation.h>

@interface RootViewController : UITableViewController <AVSpeechSynthesizerDelegate>

//Speech
@property (strong, nonatomic) AVSpeechSynthesizer *synthesizer;

@end
