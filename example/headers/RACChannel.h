//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RACChannelTerminal;

@interface RACChannel : NSObject
{
    RACChannelTerminal *_leadingTerminal;
    RACChannelTerminal *_followingTerminal;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RACChannelTerminal *followingTerminal; // @synthesize followingTerminal=_followingTerminal;
- (id)init;
@property(readonly, nonatomic) RACChannelTerminal *leadingTerminal; // @synthesize leadingTerminal=_leadingTerminal;

@end

