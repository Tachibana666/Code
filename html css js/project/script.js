// 歌曲数据
const songs = [
    { id: 1, title: "迷星叫", read: "Mayoiuta", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/d/d2/Mayoiuta_Mygo.jpg",Url:"https://www.bilibili.com/video/BV1Ue4y117Xz/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 2, title: "壱雫空", read: "Hitoshizuku", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/e/e2/Hitoshizuku_Mygo_cd.jpg",Url:"https://www.bilibili.com/bangumi/play/ep1185676?spm_id_from=333.337.search-card.all.click" },
    { id: 3, title: "碧天伴走", read: "Hekitenbansou", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/c/c5/Hekitenbansou_Mygo_cd.png",Url:"https://www.bilibili.com/video/BV1P8411U7mr?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 4, title: "影色舞", read: "Silhouette Dance", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/7/76/Silhouette_Dance_cd.jpg",Url:"https://www.bilibili.com/video/BV1gP411u7kS?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 5, title: "一同歌唱一同奏响", read: "歌いましょう鳴らしましょ", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/f/fb/Let%27s_Sing%2C_Let_it_Ring_in-game_cover.png",Url:"https://www.bilibili.com/video/BV1mH4y1U7M9?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 6, title: "潜在表明", read: "Senzaihyomei", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/d/d3/Senzaihyoumei_cd.jpg",Url:"https://www.bilibili.com/video/BV1xP4y1i7G8?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 7, title: "音一会", read: "Otoichie", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/f/f8/Otoichie_Mygo_cd.jpg",Url:"https://www.bilibili.com/video/BV1Zs4y1m7HP?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 8, title: "春日影", read: "Haruhikage", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/0/00/Haruhikage%28Crychic%29.png",Url:"https://www.bilibili.com/video/BV1JHLUz4EUy?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 9, title: "詩超絆", read: "Utakotoba", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/2/29/Utakotoba_cd.jpg",Url:"https://www.bilibili.com/video/BV1kj411i7ZY?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 10, title: "迷路日々", read: "Melody", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/a/a0/Melody-jacket.png",Url:"https://www.bilibili.com/video/BV11m4y1T7mS?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 11, title: "無路矢", read: "Noroshi", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/0/06/Noroshi_cd.png",Url:"https://www.bilibili.com/video/BV11h4y1n7mw?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 12, title: "名無声", read: "Namonaki", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/1/1d/Namonaki_GBP.png",Url:"https://www.bilibili.com/video/BV1hG4y1o74w?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 13, title: "栞", read: "Shiori", Album: "迷跡波", cover: "https://storage.moegirl.org.cn/moegirl/commons/5/55/Shiori_Mygo_cd.jpg",Url:"https://www.bilibili.com/video/BV1na4y1c7bR?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 14, title: "歩拾道", read: "Speed", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/8/87/Speed%28MyGO%21%21%21%21%21%29.jpg",Url:"https://www.bilibili.com/video/BV18LqTYiEz4/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 15, title: "明弦音", read: "Again", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/0/0a/BRMM-10877.jpg",Url:"https://www.bilibili.com/video/BV1eL6aYWEQC/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 16, title: "孤壊牢", read: "Kokoro", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/d/de/BRMM-10876.jpg",Url:"https://www.bilibili.com/video/BV1JZ421N79e/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 17, title: "霧周途", read: "Mist", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/2/28/Mist%28MyGO%21%21%21%21%21%29.png",Url:"https://www.bilibili.com/video/BV1gES9YNEFP/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 18, title: "端程山", read: "Panorama", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/8/86/BRMM-10813.jpg",Url:"https://www.bilibili.com/video/BV1Cw4m1k7nW?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 19, title: "処救生", read: "Kokyuu", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/2/29/Mygo_kokyuu_ingame_jacket.png",Url:"https://www.bilibili.com/video/BV1Vi4y1z7vu?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 20, title: "輪符雨", read: "Refrain", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/5/58/MyGO%21%21%21%21%21_-_%E8%BC%AA%E7%AC%A6%E9%9B%A8.jpg",Url:"https://www.bilibili.com/video/BV1rC41157Ci?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 21, title: "夜隠染", read: "Yokaze", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/7/74/Yokaze_MV%28MyGO%29.jpg",Url:"https://www.bilibili.com/video/BV12ekcYoEJi?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 22, title: "過惰幻", read: "Adayume", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/5/5c/Adayume%28MyGO%21%21%21%21%21%29.jpg",Url:"https://www.bilibili.com/video/BV1pc2UYhETL/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 23, title: "回層浮", read: "Kaisou", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/4/44/Sasurai_Mygo.jpg",Url:"https://www.bilibili.com/video/BV1Pp421U7Ln?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 24, title: "砂寸奏", read: "Sasurai", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/2/22/Sasurai_Mygo_cd.jpg",Url:"https://www.bilibili.com/video/BV1VH4y1E7XE?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 25, title: "焚音打", read: "Tanebi", Album: "跡暖空", cover: "https://storage.moegirl.org.cn/moegirl/commons/1/1a/Tanebi-GBP.png",Url:"https://www.bilibili.com/video/BV1J44y1c7PQ?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 26, title: "静降想", read: "Silent", Album: "单曲", cover: "https://storage.moegirl.org.cn/moegirl/commons/4/4b/BRMM-11005.jpg",Url:"https://www.bilibili.com/video/BV1gw2WBAE2q?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 27, title: "描绘未来", read: "Egakumirai", Album: "单曲", cover: "https://storage.moegirl.org.cn/moegirl/commons/a/a0/EgakuMirai%28MyGO%21%21%21%21%21%29.jpg",Url:"https://www.bilibili.com/video/BV1pXpWzyEPD?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 28, title: "往欄印", read: "Ourai", Album: "单曲", cover: "https://storage.moegirl.org.cn/moegirl/commons/d/d0/BRMM-10961.jpg",Url:"https://www.bilibili.com/video/BV1nptBzFEqt?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 29, title: "聿日箋秋", read: "Ichijitsusenshu", Album: "单曲", cover: "https://storage.moegirl.org.cn/moegirl/commons/c/c6/BRMM-10913.jpg",Url:"https://www.bilibili.com/video/BV1YbZVYCEko?spm_id_from=333.788.videopod.sections&vd_source=7cdb47d92b0902f4a3db15680478b1b6" },
    { id: 30, title: "掌心正銘", read: "Shoshinshomei", Album: "单曲", cover: "https://storage.moegirl.org.cn/moegirl/commons/8/87/BRMM-10914.jpg",Url:"https://www.bilibili.com/video/BV1e75ozMEWv/?spm_id_from=333.337.search-card.all.click&vd_source=7cdb47d92b0902f4a3db15680478b1b6" }
];
document.addEventListener('DOMContentLoaded', function() {
    // 渲染歌曲卡片
    renderSongs(songs);
    
    // 设置筛选按钮事件
    setupFilterButtons();
    
    // 设置导航链接点击事件
    setupNavLinks();
    
    // 设置搜索功能
    setupSearch();
    
    // 设置回到顶部按钮
    setupBackToTop();
    
    // 设置歌曲卡片点击事件
    setupSongCardClick();
});

// 渲染歌曲卡片到页面
function renderSongs(songsArray) {
    const songsContainer = document.getElementById('songs-container');
    songsContainer.innerHTML = '';
    
    songsArray.forEach(song => {
        const songCard = document.createElement('div');
        songCard.className = `song-card ${song.Album}`;
        songCard.dataset.id = song.id;
        
        songCard.innerHTML = `
            <div class="song-image">
                <img src="${song.cover}" alt="${song.title} 封面">
                <div class="song-overlay">
                    <div class="play-btn">
                        <i class="fas fa-play"></i>
                    </div>
                </div>
            </div>
            <div class="song-info">
                <h3 class="song-title">${song.title}</h3>
                <p class="song-read">${song.read}</p >
                <span class="song-Album">${song.Album.toUpperCase()}</span>
            </div>
        `;
        
        songsContainer.appendChild(songCard);
    });
}

// 设置筛选按钮功能
function setupFilterButtons() {
    const filterButtons = document.querySelectorAll('.filter-btn');
    
    filterButtons.forEach(button => {
        button.addEventListener('click', function() {
            
            filterButtons.forEach(btn => btn.classList.remove('active'));
            
            this.classList.add('active');
            
            const filter = this.dataset.filter;
            
            if (filter === 'all') {
                renderSongs(songs);
            } else {
                const filteredSongs = songs.filter(song => song.Album === filter);
                renderSongs(filteredSongs);
            }
        });
    });
}

// 设置导航链接平滑滚动
function setupNavLinks() {
    const navLinks = document.querySelectorAll('.nav-links a');
    
    navLinks.forEach(link => {
        link.addEventListener('click', function(e) {
            e.preventDefault();
            
            const targetId = this.getAttribute('href');
            
            if (targetId.startsWith('#')) {
                const targetElement = document.querySelector(targetId);
                
                if (targetElement) {
                    window.scrollTo({
                        top: targetElement.offsetTop - 80,
                        behavior: 'smooth'
                    });
                }
            }
        });
    });
}

// 设置搜索功能
function setupSearch() {
    const searchInput = document.querySelector('.search-box input');
    const searchBtn = document.querySelector('.search-btn');
    
    searchBtn.addEventListener('click', performSearch);
    searchInput.addEventListener('keypress', function(e) {
        if (e.key === 'Enter') {
            performSearch();
        }
    });
    
    function performSearch() {
        const searchTerm = searchInput.value.toLowerCase().trim();
        
        if (!searchTerm) {
            // 如果搜索框为空，显示所有歌曲
            renderSongs(songs);
            document.querySelector('.filter-btn[data-filter="all"]').classList.add('active');
            document.querySelectorAll('.filter-btn:not([data-filter="all"])').forEach(btn => {
                btn.classList.remove('active');
            });
            return;
        }
        
        const filteredSongs = songs.filter(song => 
            song.title.toLowerCase().includes(searchTerm) || 
            song.read.toLowerCase().includes(searchTerm) ||
            song.Album.toLowerCase().includes(searchTerm)
        );
        
        renderSongs(filteredSongs);
        
        // 更新筛选按钮状态
        document.querySelectorAll('.filter-btn').forEach(btn => {
            btn.classList.remove('active');
        });
        
        // 如果没有匹配结果，显示消息
        if (filteredSongs.length === 0) {
            const songsContainer = document.getElementById('songs-container');
            songsContainer.innerHTML = `
                <div class="no-results" style="grid-column: 1 / -1; text-align: center; padding: 50px;">
                    <i class="fas fa-search" style="font-size: 3rem; color: #ccc; margin-bottom: 20px;"></i>
                    <h3>未找到匹配的歌曲</h3>
                    <p>尝试使用其他关键词搜索</p >
                </div>
            `;
        }
    }
}

// 设置回到顶部按钮
function setupBackToTop() {
    const backToTopBtn = document.getElementById('back-to-top');
    
    window.addEventListener('scroll', function() {
        if (window.pageYOffset > 300) {
            backToTopBtn.classList.add('show');
        } else {
            backToTopBtn.classList.remove('show');
        }
    });
    
    backToTopBtn.addEventListener('click', function() {
        window.scrollTo({
            top: 0,
            behavior: 'smooth'
        });
    });
}

// 设置歌曲卡片点击事件
function setupSongCardClick() {
    
    document.getElementById('songs-container').addEventListener('click', function(e) {
        
        const songCard = e.target.closest('.song-card');
        
        if (songCard) {
            const songId = songCard.dataset.id;
            const song = songs.find(s => s.id == songId);
            
            if (song) {
                window.open(song.Url,'_blank');
            }
        }
    });
}