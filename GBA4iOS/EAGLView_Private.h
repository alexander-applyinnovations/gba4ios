//
//  EAGLView_Private.h
//  GBA4iOS
//
//  Created by Riley Testut on 7/23/13.
//  Copyright (c) 2013 Riley Testut. All rights reserved.
//

#import "EAGLView.h"

@interface EAGLView ()

- (BOOL) createFramebuffer;
- (void) destroyFramebuffer;

@end

// Because of how the code was originally written, we implement EAGLView in GBAEmulatorCore.mm, or else we'd get duplicate symbol errors.
