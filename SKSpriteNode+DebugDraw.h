//
//  SKSpriteNode+DebugDraw.h
//  CatNap
//
//  Created by Jamie Hong on 3/14/14.
//  Copyright (c) 2014 JamieHong. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface SKSpriteNode (DebugDraw)


- (void)attachDebugRectWithSize:(CGSize)s;
- (void)attachDebugFrameFromPath:(CGPathRef)bodyPath;
@end
