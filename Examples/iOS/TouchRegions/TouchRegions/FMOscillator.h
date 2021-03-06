//
//  FMOscillator.h
//  TouchRegions
//
//  Created by Aurelius Prochazka on 8/7/14.
//  Copyright (c) 2014 Hear For Yourself. All rights reserved.
//

#import "AKInstrument.h"
#import "AKFoundation.h"

@interface FMOscillator : AKInstrument

@property (nonatomic, strong) AKInstrumentProperty *frequency;
@property (nonatomic, strong) AKInstrumentProperty *carrierMultiplier;
@property (nonatomic, strong) AKInstrumentProperty *modulatingMultiplier;
@property (nonatomic, strong) AKInstrumentProperty *modulationIndex;

@end
