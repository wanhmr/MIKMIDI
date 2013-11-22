//
//  MIKMIDIEndpoint.h
//  MIDI Testbed
//
//  Created by Andrew Madsen on 3/7/13.
//  Copyright (c) 2013 Mixed In Key. All rights reserved.
//

#import "MIKMIDIObject.h"

@class MIKMIDIEntity;

@interface MIKMIDIEndpoint : MIKMIDIObject

+ (NSArray *)virtualSourceEndpoints;
+ (NSArray *)virtualDestinationEndpoints;

@property (nonatomic, weak, readonly) MIKMIDIEntity *entity;

@property (nonatomic, readonly, getter=isPrivate) BOOL private;

@end
