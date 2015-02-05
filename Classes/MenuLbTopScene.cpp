//
//  MenuLbTopScene.cpp
//  MenuLabel
//
//  Created by MAEDAHAJIME on 2015/02/05.
//
//

#include "MenuLbTopScene.h"

// 名前空間 #define USING_NS_CC using namespace cocos2d
USING_NS_CC;

Scene* MenuLbTopScene::createScene()
{
    // 「シーン」は自動解放オブジェクトです
    auto scene = Scene::create();
    
    // 「レイアウト」は自動解放オブジェクトです
    auto layer = MenuLbTopScene::create();
    
    // シーンに子としてレイヤーを追加
    scene->addChild(layer);
    
    // シーンを返す
    return scene;
}

// 「INIT」初期化
bool MenuLbTopScene::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    // 画面サイズを取得
    Size winSize = Director::getInstance()->getVisibleSize();
    
    // バックグランドカラー
    auto background = LayerColor::create(Color4B::BLUE,
                                         winSize.width,
                                         winSize.height);
    // バックグランドカラー 第2引数は表示順
    this->addChild(background, 0);
    
    // ラベルを生成
    Label* label1 = Label::createWithSystemFont("Cocos2d-x", "Arial", 120);
    
    // ラベルの設置
    label1->setPosition(Point(winSize.width /2 ,winSize.height/1.5));
    
    // ラベルタイトルを追加
    this->addChild(label1,1);
    
    // ラベルを生成
    //Ver3.x CC_CALLBACK_1 マクロ（引数が１つ）にすること
    auto labelBtnLabel01 = LabelTTF::create("ラベルボタン０１", "Arial", 48);
    // ラベルメニューアクション先の設定
    auto labelItem01 = MenuItemLabel::create(labelBtnLabel01,
                    CC_CALLBACK_1(MenuLbTopScene::menuAction01, this));
    
    // ラベルを生成
    auto labelBtnLabel02 = LabelTTF::create("ラベルボタン０２", "Arial", 48);
    // ラベルメニューアクション先の設定
    auto labelItem02 = MenuItemLabel::create(labelBtnLabel02,
                    CC_CALLBACK_1(MenuLbTopScene::menuAction02, this));
    
    // ラベルの設置
    labelItem01->setPosition(Point(winSize.width / 2,winSize.height / 2.0));
    // ラベルの設置
    labelItem02->setPosition(Point(winSize.width / 2,winSize.height / 2.5));
    
    // メニューを作成 自動解放オブジェクト
    auto menu = Menu::create(labelItem01,labelItem02,NULL);
    
    menu->setPosition(Point::ZERO);
    // メニューを追加
    this->addChild(menu, 1);
    
    
    return true;
}

// menuAction01ボタン
void MenuLbTopScene::menuAction01(Ref *pSender)
{
    CCLOG("ラベルボタン01");
    
}

// menuAction02ボタン
void MenuLbTopScene::menuAction02(Ref *pSender)
{
    CCLOG("ラベルボタン02");
    
}
