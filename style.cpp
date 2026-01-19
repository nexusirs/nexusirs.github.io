.heart {
    position: fixed;
    top: -10px;
    font-size: 20px;
    animation: fall linear forwards;
    color: #ff4d6d;
    z-index: 0;
    opacity: 0.8;
}

@keyframes fall {
    from {
        transform: translateY(0);
        opacity: 1;
    }
    to {
        transform: translateY(100vh);
        opacity: 0;
    }
}
