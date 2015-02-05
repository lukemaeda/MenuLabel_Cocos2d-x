//
//  MenuLbTopScene.h
//  MenuLabel
//
//  Created by MAEDAHAJIME on 2015/02/05.
//
//

#ifndef __MenuLabel__MenuLbTopScene__
#define __MenuLabel__MenuLbTopScene__

#include "cocos2d.h"

// 名前空間 #define USING_NS_CC using namespace cocos2d
USING_NS_CC;

class MenuLbTopScene : public Layer
{
    
public:
    
    // 初期化のメソッド
    virtual bool init();
    
    static cocos2d::Scene* createScene();
    
    // テキストスタートボタン押下時の処理宣言 戻る Object →　Ref に変更
    void menuAction01(Ref *pSender);
    // テキストスタートボタン押下時の処理宣言 戻る Object →　Ref に変更
    void menuAction02(Ref *pSender);
    
    // create()を使えるようにしている。
    CREATE_FUNC(MenuLbTopScene);
};

#endif /* defined(__MenuLabel__MenuLbTopScene__) */
