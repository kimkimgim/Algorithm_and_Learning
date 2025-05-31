def solution(genres, plays):
    play = []
    for number in range(len(plays)):
        play.append((number, plays[number]))

    all_gen = {}
    for i in range(len(genres)):

        if genres[i] in all_gen:
            all_gen[genres[i]].append(play[i])

        else:
            all_gen[genres[i]] = [play[i]]


    # 장르별 재생합
    genre_play_counts = {}
    for genre in all_gen:

        play_list = all_gen[genre]
        play_sum = 0
        for _,counts in play_list:
            play_sum += counts

        # play_sum = sum(counts for _, counts in play_list)

        genre_play_counts[genre] = play_sum



    top_genre = ""
    max_count = 0
    for i in genre_play_counts:
        if max_count < genre_play_counts[i]:
            max_count = genre_play_counts[i]
            top_genre = i


    answer = []
    top_sorted_list = sorted(all_gen[top_genre], key=lambda x:x[1], reverse=True)

    for i in range(min(2,len(top_sorted_list))):
        answer.append(top_sorted_list[i][0])

    sorted_genre_play_counts = sorted(genre_play_counts.items(), key=lambda x:x[1], reverse=True)
    for genre in sorted_genre_play_counts:
        if genre[0] == top_genre:
            pass
        else:
            sorted_list = sorted(all_gen[genre[0]], key=lambda x:x[1], reverse=True)
            for i in range(min(2, len(sorted_list))):
                answer.append(sorted_list[i][0])
                
    return answer