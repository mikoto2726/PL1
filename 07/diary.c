int main(){
    Diary* diary = create_diary();

    add_tweet(diary, "Hello, World!");
    add_tweet(diary, "My second tweet!");
    add_tweet(diary, "My third tweet!");

    Tweet* tw = get_tweet(diary, 1);
    remove_tweet(diary, tw);
     
    add_tweet(diary, "My last tweet!");

    print_tweets(diary);

    return 0;
}